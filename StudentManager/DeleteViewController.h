//
//  DeleteViewController.h
//  StudentManager
//
//  Created by 张树青 on 16/1/11.
//  Copyright (c) 2016年 Elean. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DeleteViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *IDField;
- (IBAction)deleteClick:(id)sender;

@end
