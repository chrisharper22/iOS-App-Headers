//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGSponsoredSupportConfiguration, IGStoryViewerViewModel, NSDictionary, NSMutableDictionary, NSNumber, NSString;
@protocol IGStoryItemType;

@protocol IGStoryFullscreenSectionLoggingContextViewerDataSource <NSObject>
- (long long)sessionReelCounter;
- (IGSponsoredSupportConfiguration *)sponsoredSupportConfiguration;
- (long long)initialEntryPoint;
- (NSDictionary *)reelExtrasForStory:(IGStoryViewerViewModel *)arg1 storyItem:(id <IGStoryItemType>)arg2;
- (NSMutableDictionary *)viewerSessionFieldsWithMediaType:(long long)arg1 isHighlight:(_Bool)arg2 isOwnedByCurrentUser:(_Bool)arg3 viewerPosition:(long long)arg4;
- (NSNumber *)sponsoredStoryInsertedIndexWithStoryPk:(NSString *)arg1;
- (long long)trayPositionForStory:(IGStoryViewerViewModel *)arg1;
@end
