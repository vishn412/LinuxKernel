Create patch for kernel git tree:

```
git branch new
git checkout new
```

Make changes

```
git commit -m '...'
```

```
git format-patch master..new 
```

If commit is made on same branch

```
git format-patch master 2>abc.patch
```

If not using git 

```
diff -up
```
