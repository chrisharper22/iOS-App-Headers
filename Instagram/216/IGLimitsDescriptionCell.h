//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewCell.h>

#import "IGCoreTextLinkHandler-Protocol.h"

@class IGCoreTextView, NSString;
@protocol IGLimitsDescriptionCellDelegate;

@interface IGLimitsDescriptionCell : IGGroupedTableViewCell <IGCoreTextLinkHandler>
{
    IGCoreTextView *_textView;
    id <IGLimitsDescriptionCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLimitsDescriptionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)layoutSubviews;
- (void)configureWithText:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

