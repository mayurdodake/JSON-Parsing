//
//  NewsTableViewController.h
//  JSON Parsing
//
//  Created by apple on 29/08/16.
//  Copyright © 2016 felix-its. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NewsTableViewController : UITableViewController<NSURLConnectionDataDelegate,NSURLConnectionDelegate>

@property(nonatomic,retain)NSMutableArray *newsarray;

@property(nonatomic,retain)NSMutableData *mydata;


@end
