//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewCell.h>

@class IGUnseenIndicatorView, UIActivityIndicatorView, UIImageView;

@interface IGStoryLinkCreationTypeCell : IGGroupedTableViewCell
{
    IGUnseenIndicatorView *_unseenIndicatorView;
    UIActivityIndicatorView *_activityIndicatorView;
    UIImageView *_chevronImageView;
    _Bool _showNewItemIndicator;
    _Bool _showChevronRight;
    unsigned long long _storyLinkCreationTypeCellStatus;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long storyLinkCreationTypeCellStatus; // @synthesize storyLinkCreationTypeCellStatus=_storyLinkCreationTypeCellStatus;
@property(nonatomic) _Bool showChevronRight; // @synthesize showChevronRight=_showChevronRight;
@property(nonatomic) _Bool showNewItemIndicator; // @synthesize showNewItemIndicator=_showNewItemIndicator;
- (void)_handleUpdatedStoryLinkCreationTypeCellStatus;
- (void)_setupNewItemIndicatorIfNeeded;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
