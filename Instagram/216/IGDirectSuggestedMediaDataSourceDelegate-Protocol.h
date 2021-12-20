//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGDirectSuggestedMediaDataSource, IGMedia, NSString;

@protocol IGDirectSuggestedMediaDataSourceDelegate <NSObject>
- (_Bool)suggestedMediaDataSource:(IGDirectSuggestedMediaDataSource *)arg1 shouldShowFeedItemAsSelected:(IGMedia *)arg2;
- (void)suggestedMediaDataSource:(IGDirectSuggestedMediaDataSource *)arg1 didFailToLoadItemsIsInternetConnected:(_Bool)arg2;
- (void)suggestedMediaDataSourceDidFinishLoadingItems:(IGDirectSuggestedMediaDataSource *)arg1;
- (void)suggestedMediaDataSource:(IGDirectSuggestedMediaDataSource *)arg1 didSelectFeedItem:(IGMedia *)arg2 contentIndex:(unsigned long long)arg3 contentSource:(NSString *)arg4;
- (void)suggestedMediaDataSourceShowReelsSubpage:(IGDirectSuggestedMediaDataSource *)arg1;
@end
