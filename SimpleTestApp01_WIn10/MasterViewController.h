//
//  MasterViewController.h
//  SimpleTestApp01_WIn10
//
//  Created by YusukeYamamoto on 2015/08/14.
//  Copyright (c) 2015年 ___FULLUSERNAME___. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
