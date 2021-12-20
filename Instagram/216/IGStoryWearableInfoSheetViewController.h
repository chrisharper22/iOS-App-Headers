//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGGestureHandler-Protocol.h"
#import "IGStoryWearableInfoSheetViewDelegate-Protocol.h"

@class IGStoryWearableInfoSheetView, IGWearableAttributionInfo, NSString;
@protocol IGStoryWearableInfoSheetViewControllerDelegate;

@interface IGStoryWearableInfoSheetViewController : IGViewController <IGStoryWearableInfoSheetViewDelegate, IGGestureHandler>
{
    IGStoryWearableInfoSheetView *_wearableInfoSheetView;
    IGWearableAttributionInfo *_attributionModel;
    id <IGStoryWearableInfoSheetViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryWearableInfoSheetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)storyWearableInfoSheetViewDidTapLearnMore:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (_Bool)prefersNavigationBarDividerHidden;
- (struct CGSize)preferredContentSize;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 attributionModel:(id)arg2 analyticsModule:(id)arg3 inPartialNavigationController:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

