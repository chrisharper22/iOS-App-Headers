//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGStreamingVideoMetaDataCacheEntry, IGStreamingVideoNetworkDataLoader, NSError;

@protocol IGStreamingVideoNetworkLoadingDelegate <NSObject>
- (void)networkDataLoaderDidCompleteDataDownload:(IGStreamingVideoNetworkDataLoader *)arg1;
- (void)networkDataLoader:(IGStreamingVideoNetworkDataLoader *)arg1 didEncounterError:(NSError *)arg2;
- (void)networkDataLoader:(IGStreamingVideoNetworkDataLoader *)arg1 didReceiveMetaData:(IGStreamingVideoMetaDataCacheEntry *)arg2;
- (void)networkDataLoader:(IGStreamingVideoNetworkDataLoader *)arg1 didReceiveBytes:(const char *)arg2 length:(unsigned long long)arg3 contentLength:(long long)arg4 bytesSource:(long long)arg5;
@end

