//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGCanvasSwipeUpCellDelegate-Protocol.h"

@class IGCanvasSwipeUpViewModel, NSString;
@protocol IGCanvasSwipeUpSectionControllerDelegate;

@interface IGCanvasSwipeUpSectionController : IGListSectionController <IGCanvasSwipeUpCellDelegate>
{
    IGCanvasSwipeUpViewModel *_viewModel;
    id <IGCanvasSwipeUpSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGCanvasSwipeUpViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)canvasSwipeUpCellDidTap:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

