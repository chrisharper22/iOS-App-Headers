//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGGestureHandler-Protocol.h"

@class IGImageView, NPECollabUpsellTitleAndDescriptionView, NSString, NSURL, UIButton;

@interface NPECollabUpsellViewController : UIViewController <IGGestureHandler>
{
    NSString *_title;
    NSString *_message;
    NSURL *_contentDeeplink;
    IGImageView *_collabIconImageView;
    NPECollabUpsellTitleAndDescriptionView *_titleAndDescriptionView;
    UIButton *_getCollabButton;
}

+ (id)upsellViewControllerForAttributionWithSender:(id)arg1 contentDeeplink:(id)arg2;
- (void).cxx_destruct;
- (void)_getCollabButtonPressed;
- (_Bool)canRespondToGesture:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 message:(id)arg2 contentDeeplink:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
