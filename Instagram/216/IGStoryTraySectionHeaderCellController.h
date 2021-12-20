//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListCellController.h>

#import "IGStoryTraySectionHeaderCellDelegate-Protocol.h"

@class IGStoryTraySectionHeaderCell, NSString;
@protocol IGStoryTraySectionContext, IGStoryTraySectionHeaderCellControllerDelegate;

@interface IGStoryTraySectionHeaderCellController : IGListCellController <IGStoryTraySectionHeaderCellDelegate>
{
    id <IGStoryTraySectionHeaderCellControllerDelegate> _delegate;
    id <IGStoryTraySectionContext> _storyTraySectionContext;
    IGStoryTraySectionHeaderCell *_headerCell;
}

+ (Class)collectionViewCellClass;
- (void).cxx_destruct;
@property(nonatomic) __weak IGStoryTraySectionHeaderCell *headerCell; // @synthesize headerCell=_headerCell;
@property(readonly, nonatomic) __weak id <IGStoryTraySectionContext> storyTraySectionContext; // @synthesize storyTraySectionContext=_storyTraySectionContext;
@property(nonatomic) __weak id <IGStoryTraySectionHeaderCellControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)headerCellURLTapped:(id)arg1 didTapLink:(id)arg2;
- (void)headerCellSecondaryActionButtonWasPressed:(id)arg1;
- (void)headerCellActionButtonWasPressed:(id)arg1;
- (struct CGSize)sizeForWidth:(double)arg1;
- (void)configureCell:(id)arg1;
- (id)initWithSectionContext:(id)arg1 storyTraySectionContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
