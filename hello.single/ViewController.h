//
//  ViewController.h
//  hello.single
//
//  Created by Diogo Castro on 2/22/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UILabel *mainLabel;
@property (weak, nonatomic) IBOutlet UITextField *textField;

@property (copy, nonatomic) NSString *userName;

- (IBAction)displayMessage:(id)sender;

- (IBAction)changeGreeting:(id)sender;

@end
