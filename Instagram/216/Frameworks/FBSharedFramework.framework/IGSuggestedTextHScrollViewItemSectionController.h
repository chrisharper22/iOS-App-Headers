//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@protocol IGSuggestedTextHScrollViewItem, IGSuggestedTextHScrollViewItemSectionControllerDelegate;

@interface IGSuggestedTextHScrollViewItemSectionController : IGListSectionController
{
    id <IGSuggestedTextHScrollViewItem> _model;
    id <IGSuggestedTextHScrollViewItemSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSuggestedTextHScrollViewItemSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (struct UIEdgeInsets)inset;
- (long long)numberOfItems;
- (void)didUpdateToObject:(id)arg1;

@end

