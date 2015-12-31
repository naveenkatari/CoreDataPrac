//
//  DeviceViewController.h
//  CoreDataPrac
//
//  Created by Naveen Katari on 31/12/15.
//  Copyright © 2015 Sourcebits. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface DeviceViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
@property (nonatomic, strong) NSMutableArray *devices;
@property (weak, nonatomic) IBOutlet UITableView *devicesTableView;

@end
