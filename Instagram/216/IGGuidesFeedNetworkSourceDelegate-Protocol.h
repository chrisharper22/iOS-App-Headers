//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGEmptyFeedModel, IGGuidesFeedNetworkSource;

@protocol IGGuidesFeedNetworkSourceDelegate <NSObject>
- (IGEmptyFeedModel *)emptyFeedModelForGuidesNetworkSource:(IGGuidesFeedNetworkSource *)arg1;
- (void)guidesFeedNetworkSourceDidUpdate:(IGGuidesFeedNetworkSource *)arg1;
@end

