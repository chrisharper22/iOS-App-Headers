//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGDirectContentSearchResult, NSString;

@protocol IGDirectContentSearchResultsListDataSourceDelegate <NSObject>
- (void)didTapOnMessageResult:(IGDirectContentSearchResult *)arg1;
- (void)resultChosenWithMessageId:(NSString *)arg1;
- (void)resultDidAppearWithMessageId:(NSString *)arg1;
@end
