//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGStoryTPMAAudioPlayerPreloadPool, IGUserSession;

@interface IGStoryTPMAAudioPlayerPreloader : NSObject
{
    IGStoryTPMAAudioPlayerPreloadPool *_playerPreloadPool;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)discardPreloadedAudioPlayersExcludingItems:(id)arg1;
- (void)preloadForStoryItem:(id)arg1;
- (_Bool)canPreloadStoryItem:(id)arg1;
- (id)initWithPlayerPreloadPool:(id)arg1 userSession:(id)arg2;

@end

