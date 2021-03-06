//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

@class IGShareSheetShareToRow, IGSundialShareSheetTitleRow, UILabel;
@protocol IGLayoutElement;

@interface IGSundialShareSheetPublicShareToSection : IGPassthroughView
{
    IGSundialShareSheetTitleRow *_title;
    UILabel *_description;
    IGShareSheetShareToRow *_shareToFeed;
    IGShareSheetShareToRow *_shareToStory;
    _Bool _showShareToStoryRow;
    id <IGLayoutElement> _layout;
}

- (void).cxx_destruct;
- (void)_didTapShareToStory:(id)arg1;
- (void)_didTapShareToFeed:(id)arg1;
@property(readonly, nonatomic) IGShareSheetShareToRow *shareToStory;
@property(readonly, nonatomic) IGShareSheetShareToRow *shareToFeed;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithUserSession:(id)arg1 showShareToStoryRow:(_Bool)arg2;

@end

