//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class IGFeedCreationFlowLogger, IGMedia, NSString, UIViewController;
@protocol IGNftComposePostMetadataViewControllerDelegate;

@interface IGNftEditIntentTarget : NSObject <FBIntentTarget>
{
    IGMedia *_media;
    UIViewController *_presentingViewController;
    id <IGNftComposePostMetadataViewControllerDelegate> _delegate;
    IGFeedCreationFlowLogger *_feedCreationLogger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGFeedCreationFlowLogger *feedCreationLogger; // @synthesize feedCreationLogger=_feedCreationLogger;
@property(readonly, nonatomic) id <IGNftComposePostMetadataViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(readonly, nonatomic) IGMedia *media; // @synthesize media=_media;
- (id)initWithMedia:(id)arg1 presentingViewController:(id)arg2 delegate:(id)arg3 feedCreationLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
