//
//  addDoToViewViewController.h
//  push Notification Demo
//
//  Created by Dhaval Kumar on 24/11/15.
//  Copyright © 2015 Endive Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface addDoToViewViewController : UIViewController<UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *txtItem;
@property (weak, nonatomic) IBOutlet UIDatePicker *datePickerData;
- (IBAction)save:(id)sender;
- (IBAction)cancel:(id)sender;

@end
