//
//  nextViewController.h
//  localNotification
//
//  Created by Vinod Kumar on 24/11/15.
//  Copyright © 2015 Vinod Kumar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface nextViewController : UIViewController

- (IBAction)btnCancel:(id)sender;
- (IBAction)btnSave:(id)sender;
@property (strong, nonatomic) IBOutlet UIDatePicker *datePicker;

@end
