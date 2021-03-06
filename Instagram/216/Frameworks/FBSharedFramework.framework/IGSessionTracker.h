//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface IGSessionTracker : NSObject <NSCopying>
{
    NSString *_sessionId;
    NSString *_initialSessionId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *initialSessionId; // @synthesize initialSessionId=_initialSessionId;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateSessionId:(id)arg1;
- (id)initWithSessionId:(id)arg1;

@end

