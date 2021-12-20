//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSArray, NSData, NSString;

@protocol FNFProxyServerDataProvider <NSObject>
- (int)segmentCountForTrack:(long long)arg1;
- (double)segmentDurationForTrack:(long long)arg1 atIndex:(int)arg2;
- (NSArray *)abrEntitiesForTrack:(long long)arg1;
- (NSData *)readHeaderDataForTrack:(long long)arg1 representationId:(NSString *)arg2;
- (NSData *)readDataForTrack:(long long)arg1 segment:(long long)arg2 offset:(long long)arg3 completed:(_Bool *)arg4;
@end
