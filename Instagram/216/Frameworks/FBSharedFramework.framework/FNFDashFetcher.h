//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FNFDashFetching-Protocol.h>
#import <FBSharedFramework/FNFDashNetworkerDelegate-Protocol.h>

@class FNFAssetResourceLoader, FNFDashPlaylist, NSMutableArray, NSString;
@protocol FNFDashErrorListening, FNFDashFetcherDelegate, FNFDashHeading, FNFDashNetworking, FNFLogging, OS_dispatch_queue;

@interface FNFDashFetcher : NSObject <FNFDashFetching, FNFDashNetworkerDelegate>
{
    struct FNFDashConfig _config;
    long long _track;
    FNFDashPlaylist *_playlist;
    FNFAssetResourceLoader *_resourceLoader;
    id <FNFDashNetworking> _networker;
    id <FNFDashErrorListening> _errorListener;
    id <FNFLogging> _logger;
    id <FNFDashFetcherDelegate> _delegate;
    id <FNFDashHeading> _headerInFetchProgress;
    NSMutableArray *_chunksInFetchProgress;
    _Bool _async;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_videoID;
    int _consecutiveFetchWarnings;
}

- (void).cxx_destruct;
- (id)_sendFetchWithRange:(id)arg1 track:(long long)arg2 qualitySelection:(id)arg3 representation:(id)arg4 diskCachingDisabled:(_Bool)arg5;
- (void)_clearInProgressFetchablesFrom:(int)arg1;
- (CDStruct_1b6d18a9)_calculateEndTimeWithRoundingForChunkIndex:(int)arg1 track:(long long)arg2 representation:(id)arg3;
- (int)_appendNetworkData:(id)arg1 fromOffset:(long long)arg2 toFetchable:(id)arg3;
- (id)_finalRangeForInflightRange:(id)arg1;
- (void)dataFailedWithMetrics:(id)arg1 error:(id)arg2 sequenceIndex:(int)arg3;
- (void)dataFinishedWithMetrics:(id)arg1 sequenceIndex:(int)arg2;
- (void)headersFetched:(id)arg1;
- (void)retryAttemptForError:(id)arg1 errorData:(id)arg2;
- (void)dataFetched:(id)arg1 sequenceIndex:(int)arg2;
- (_Bool)fetchInProgress;
- (void)cancelFetchFrom:(int)arg1 withReason:(id)arg2;
- (id)fetchChunks:(id)arg1 withQualitySelection:(id)arg2 diskCachingDisabled:(_Bool)arg3;
- (id)fetchChunks:(id)arg1 withQualitySelection:(id)arg2;
- (void)setDelegate:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)initWithConfig:(struct FNFDashConfig)arg1 track:(long long)arg2 playlist:(id)arg3 resourceLoader:(id)arg4 networker:(id)arg5 errorListener:(id)arg6 async:(_Bool)arg7 videoID:(id)arg8 logger:(id)arg9;
- (id)initWithConfig:(struct FNFDashConfig)arg1 sessionConfig:(CDStruct_c72663c7)arg2 track:(long long)arg3 playlist:(id)arg4 resourceLoader:(id)arg5 errorListener:(id)arg6 logger:(id)arg7;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

