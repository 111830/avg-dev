to get the list of groups belongs to the current user:

```sh
groups $USER
```

To add a user to a group, where `group_name` is the group's name.

```sh
sudo usermode -aG group_name $USER 
```


Refresh the new changes to the group, where `group_name` is the groups name.

```sh
newgrp group_name
```