//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface FBWatchdogStallFileContents : FBValueObject <NSCopying, NSCoding>
{
    NSString *_breakpadConfigFilePath;
    double _timeout;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, copy, nonatomic) NSString *breakpadConfigFilePath; // @synthesize breakpadConfigFilePath=_breakpadConfigFilePath;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBreakpadConfigFilePath:(id)arg1 timeout:(double)arg2;

@end

