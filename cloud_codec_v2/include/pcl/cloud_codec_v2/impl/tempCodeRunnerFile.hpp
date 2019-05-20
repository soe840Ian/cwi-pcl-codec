        viewer->setBackgroundColor (0, 0, 0);
        viewer->addPointCloud<PointT> (input_transformed, "sample cloud");
        viewer->setPointCloudRenderingProperties (pcl::visualization::PCL_VISUALIZER_POINT_SIZE, 1, "sample cloud");
        viewer->addCoordinateSystem (1.0);
        viewer->initCameraParameters ();