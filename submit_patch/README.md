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

```
git format-patch HEAD^
```

```
git format-patch -n1
```

If not using git 

```
diff -up
or 
diff -Nu originial new
```

Send Email for the patch
```
git send-email --cc=XXX --cc=XXX --to=XXX@vger.kernel.org 0001-XXX.patch
```

