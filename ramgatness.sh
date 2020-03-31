#/bin/bash
foo=$(xxd -b $1 | cut -d" " -f 2-7 | tr "\n" " "  | sed s/' '//g)


if [[ $2 = "gamma" ]]
then

        for (( i=0; i<${#foo}; i++ )); do
                echo "${foo:$i:1}";
                if [[ "${foo:$i:1}" = 1 ]]; then
                        $(xrandr --listmonitors | grep "^ " | cut -f 6 -d' ' | \
                        xargs --replace=MONITOR xrandr --output MONITOR --gamma 1.0:1.0:1.0);
                else
                        $(xrandr --listmonitors | grep "^ " | cut -f 6 -d' ' | \
                        xargs --replace=MONITOR xrandr --output MONITOR  --gamma 0.59:0.59:0.59);
                fi
                sleep $3
        done

        $(xrandr --listmonitors | grep "^ " | cut -f 6 -d' ' | \
        xargs --replace=MONITOR xrandr --output MONITOR --gamma 1.0:1.0:1.0);
elif [[ $2 = "payload" ]]
then
        for (( i=0; i<${#foo}; i++ )); do
                echo "${foo:$i:1}";
                if [[ "${foo:$i:1}" = 1 ]]; then

                        ./loader $4
                else
                        sleep $3
                        continue
                fi
        done
elif [[ $2 = "brightness" ]]
then
        for (( i=0; i<${#foo}; i++ )); do
                echo "${foo:$i:1}";
                if [[ "${foo:$i:1}" = 1 ]]; then
                        xrandr --listmonitors | grep "^ " | cut -f 6 -d' ' | \
                        xargs --replace=MONITOR xrandr --output MONITOR --brightness 1.0
                        sleep $3
                else
                        xrandr --listmonitors | grep "^ " | cut -f 6 -d' ' | \
                        xargs --replace=MONITOR xrandr --output MONITOR --brightness 0.5
                fi
        done


fi
