//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import <FBSharedFramework/IGFacebookXpostingDestinationPickerDestinationCellDelegate-Protocol.h>

@class IGFacebookXpostingDestination, NSString;
@protocol IGFacebookXpostingDestinationPickerDestinationSectionDelegate;

@interface IGFacebookXpostingDestinationPickerDestinationSectionController : IGListSectionController <IGFacebookXpostingDestinationPickerDestinationCellDelegate>
{
    double _cellWidth;
    double _horizontalPadding;
    IGFacebookXpostingDestination *_cellModel;
    id <IGFacebookXpostingDestinationPickerDestinationSectionDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)destinationDidSelectDestinationCellWithCellModel:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct UIEdgeInsets)inset;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)initWithCellWidth:(double)arg1 horizontalPadding:(double)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

