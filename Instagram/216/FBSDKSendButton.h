//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBSDKButton.h>

#import "FBSDKButtonImpressionLogging-Protocol.h"
#import "FBSDKSharingButton-Protocol.h"

@class FBSDKMessageDialog, NSDictionary, NSString;
@protocol FBSDKSharingContent;

@interface FBSDKSendButton : FBSDKButton <FBSDKButtonImpressionLogging, FBSDKSharingButton>
{
    FBSDKMessageDialog *_dialog;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FBSDKMessageDialog *dialog; // @synthesize dialog=_dialog;
- (void)_share:(id)arg1;
- (_Bool)isImplicitlyDisabled;
- (void)configureButton;
@property(readonly, copy, nonatomic) NSString *impressionTrackingIdentifier;
@property(readonly, copy, nonatomic) NSString *impressionTrackingEventName;
@property(readonly, copy, nonatomic) NSDictionary *analyticsParameters;
@property(copy, nonatomic) id <FBSDKSharingContent> shareContent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

