//
//  DeviceDetailViewController.h
//  CoreDataPrac
//
//  Created by Naveen Katari on 31/12/15.
//  Copyright © 2015 Sourcebits. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface DeviceDetailViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *nameTextField;
@property (weak, nonatomic) IBOutlet UITextField *companyTextField;
@property (weak, nonatomic) IBOutlet UITextField *versionTextField;
- (IBAction)cancelButton:(id)sender;
- (IBAction)saveButton:(id)sender;

@end
