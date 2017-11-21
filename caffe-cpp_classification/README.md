# Caffe Classification Example
This example demonstrates how to convert an existing project into one that can be used on the EnvoyAI Platform.

The first step is to create a [Dockerfile](Dockerfile). This project has a Dockerfile that we could start off with.  The file provides a sample structured template for which you can use and modify for your own machine. 
We just needed to specify an __ENTRYPOINT__ that would provide the path for the image input, and write the metadata __LABELs__.

The next step is to modify the existing project to write the appropriate files. See the [Diff](https://github.com/jaketaylorpro/caffe/commit/a90ddca0e384c04d4d0ec0c49e0e7b07c6f0cb07) in our fork of the Caffe repo.