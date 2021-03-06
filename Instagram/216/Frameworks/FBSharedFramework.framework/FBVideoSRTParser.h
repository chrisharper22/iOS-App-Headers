//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBVideoCaptionParser-Protocol.h>

@class NSArray, NSString;

@interface FBVideoSRTParser : NSObject <FBVideoCaptionParser>
{
    NSArray *_captions;
}

+ (double)timeIntervalFromString:(id)arg1;
+ (id)parse:(id)arg1 error:(id *)arg2 options:(struct FBVideoCaptionParserOptions)arg3;
- (void).cxx_destruct;
- (id)getCaptionForTime:(double)arg1 options:(struct FBVideoCaptionParserOptions)arg2;
- (id)captionForPlaybackTime:(double)arg1 options:(struct FBVideoCaptionParserOptions)arg2;
- (id)initWithCaptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

