//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGStorySectionControllerType-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IGStoryTrayCollectionViewConfiguration, IGStoryTrayViewModel, IGUserSession, NSString;
@protocol IGPostLiveItemSectionControllerDelegate;

@interface IGPostLiveItemSectionController : IGListSectionController <UIGestureRecognizerDelegate, IGStorySectionControllerType>
{
    struct CGSize _cellSize;
    IGStoryTrayCollectionViewConfiguration *_storyTrayConfiguration;
    NSString *_module;
    id <IGPostLiveItemSectionControllerDelegate> _delegate;
    IGStoryTrayViewModel *_viewModel;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) IGStoryTrayViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <IGPostLiveItemSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)updateCellSize:(struct CGSize)arg1;
- (void)configureWithInitialCellSize:(struct CGSize)arg1;
- (void)_didLongPressCell:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 storyTrayConfiguration:(id)arg2 module:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

