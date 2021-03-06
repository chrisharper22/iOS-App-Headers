//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FNFProxyServerPlaylistProvider-Protocol.h>

@class NSArray, NSString;
@protocol FNFProxyServerDataProvider;

@interface FNFPlaylistBuilder : NSObject <FNFProxyServerPlaylistProvider>
{
    id <FNFProxyServerDataProvider> _dataProvider;
    NSString *_baseURL;
    NSArray *_keyIds;
    _Bool _hasAudioTrack;
}

- (void).cxx_destruct;
- (id)_keyIdWithTrack:(long long)arg1;
- (id)buildAudioPlaylistForVOD:(unsigned long long)arg1;
- (id)buildVideoPlaylistForVOD:(unsigned long long)arg1;
- (id)buildLivePlaylistWithTrack:(long long)arg1;
- (id)buildMasterPlaylist;
- (id)initWithDataProvider:(id)arg1 baseURL:(id)arg2 keyIds:(id)arg3 hasAudioTrack:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

