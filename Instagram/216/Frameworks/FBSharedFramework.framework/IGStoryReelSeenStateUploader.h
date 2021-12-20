//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IGAPIClient;

@interface IGStoryReelSeenStateUploader : NSObject
{
    NSString *_userSessionPK;
    id <IGAPIClient> _networker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(readonly, copy, nonatomic) NSString *userSessionPK; // @synthesize userSessionPK=_userSessionPK;
- (void)uploadSeenState:(id)arg1 seenStateInfo:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (id)initWithUserSessionPK:(id)arg1 networker:(id)arg2;

@end

