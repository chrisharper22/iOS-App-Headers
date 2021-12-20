//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSURL;

@interface FBARHandTrackingModelConfiguration : FBValueObject <NSCopying, NSCoding>
{
    _Bool _isFullyAsync;
    NSURL *_execNetFileURL;
    NSURL *_predictNetFileURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isFullyAsync; // @synthesize isFullyAsync=_isFullyAsync;
@property(readonly, copy, nonatomic) NSURL *predictNetFileURL; // @synthesize predictNetFileURL=_predictNetFileURL;
@property(readonly, copy, nonatomic) NSURL *execNetFileURL; // @synthesize execNetFileURL=_execNetFileURL;
- (id)initWithExecNetFileURL:(id)arg1 predictNetFileURL:(id)arg2 isFullyAsync:(_Bool)arg3;

@end

