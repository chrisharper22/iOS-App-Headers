//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGGestureHandler-Protocol.h"

@class FBIGXpostingStoryAttributionTitleAndDescriptionView, IGImageView, IGUser, NSString;

@interface FBIGXpostingStoryAttributionViewController : IGViewController <IGGestureHandler>
{
    IGUser *_sender;
    IGImageView *_fbIconImageView;
    FBIGXpostingStoryAttributionTitleAndDescriptionView *_titleAndDescriptionView;
}

- (void).cxx_destruct;
- (_Bool)canRespondToGesture:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSender:(id)arg1 analyticsModule:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

