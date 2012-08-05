//
//  BWMyLordInfoViewController.h
//  Yini
//
//  Created by siqi wang on 12-7-20.
//  Copyright (c) 2012年 siqi wang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BWLord.h"
#import "WSQFileUploader.h"

@interface BWMyLordInfoViewController : UIViewController<UIImagePickerControllerDelegate, UINavigationControllerDelegate, BWLordInfoDelegate, WSQFileUploaderDelegate>
{
    UIImage *pickedImage;
}
- (IBAction)choosePicture:(id)sender;

@property (nonatomic, strong) BWLord *lord;

@property (strong, nonatomic) IBOutlet UIImageView *profilPic;
@property (strong, nonatomic) IBOutlet UILabel *statusTextLable;
@property (strong, nonatomic) IBOutlet UIActivityIndicatorView *littleWheel;
@property (strong, nonatomic) NSString *navTitle;
@property (strong, nonatomic) id delegate;

- (IBAction)save:(id)sender;


@end


@protocol MyLordInfoViewDelegate <NSObject>

-(void)myLordInfoViewDidGotNewProfile;

@end