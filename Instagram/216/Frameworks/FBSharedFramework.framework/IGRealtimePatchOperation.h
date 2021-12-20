//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface IGRealtimePatchOperation : NSObject <NSCopying>
{
    unsigned long long _type;
    NSString *_path;
    id _value;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringFromType;
- (id)initWithDictionary:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 path:(id)arg2 value:(id)arg3;

@end
