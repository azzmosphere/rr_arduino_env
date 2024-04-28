# rr_arduino_env
library to create a template for arduino boards to communicate with raspberry Pi

Communications framework.

# GET STATE

request by the agent to get the current state,  

```
{
    "actions": [
        {
            "oid": 0
            "name": "motor-left",
            "value": 50
        },
        {
            "oid": 1
            "name": "motor-right",
            "value": 50
        },
        {
            "oid": 2,
            "name": "duration",
            "value": 1
        }
    ] 
}
```


```
{
    "observations" : [
        {
            "oid":  0,
            "name": "ultrasonic-sensor",
            "value": 5.5
        },
        {
            "oid":  1,
            "name": "ultrasonic-sensor",
            "value": 20
        },
          {
            "oid":  2,
            "name": "ultrasonic-sensor",
            "value": 3
        }      
    ],
    "rewards": [
        {
            "oid":  0,
            "name": "avoid_wall",
            "value": 5
        },
        {
            "oid": 1,
            "name": "find_something",
            "value": 1000
        },
        {
            "oid": 2,
            "name": "hit_wall",
            "value": -10000
        }
    ]
}
```

Observations are returned by the environment, in this case the arduino board. 

# References

[Reinforcement Learning with Neural Network](https://www.baeldung.com/cs/reinforcement-learning-neural-network)
[States, Observation and Action Spaces in Reinforcement Learning](https://medium.com/swlh/states-observation-and-action-spaces-in-reinforcement-learning-569a30a8d2a1)