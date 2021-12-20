//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class IGAccountLinkingMainAccountSettingSectionViewModel, IGTapButton;
@protocol IGAccountLinkingMainAccountSettingSectionControllerDelegate;

@interface IGAccountLinkingMainAccountSettingSectionController : IGListSectionController
{
    double _cellWidth;
    IGAccountLinkingMainAccountSettingSectionViewModel *_viewModel;
    IGTapButton *_overflowButton;
    id <IGAccountLinkingMainAccountSettingSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_overflowButtonTapped:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (id)supplementaryViewSource;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (long long)numberOfItems;
- (id)initWithCellWidth:(double)arg1 viewModel:(id)arg2 delegate:(id)arg3;

@end

