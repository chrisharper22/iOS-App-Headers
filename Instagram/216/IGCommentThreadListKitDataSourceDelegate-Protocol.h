//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGCommentGroupSectionDelegate-Protocol.h"
#import "IGCommentLoadItemDelegate-Protocol.h"
#import "IGCommentSectionDelegate-Protocol.h"
#import "IGFacebookCommentThreadHeaderDelegate-Protocol.h"

@class IGPartialModalSheetViewController;

@protocol IGCommentThreadListKitDataSourceDelegate <IGCommentGroupSectionDelegate, IGCommentSectionDelegate, IGCommentLoadItemDelegate, IGFacebookCommentThreadHeaderDelegate>
- (IGPartialModalSheetViewController *)partialModalSheetViewController;
@end
