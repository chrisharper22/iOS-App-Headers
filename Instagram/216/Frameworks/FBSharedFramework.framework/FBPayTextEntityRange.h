//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface FBPayTextEntityRange : FBValueObject <NSCopying, NSCoding>
{
    long long _offset;
    long long _length;
    NSString *_url;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, nonatomic) long long length; // @synthesize length=_length;
@property(readonly, nonatomic) long long offset; // @synthesize offset=_offset;
- (id)initWithOffset:(long long)arg1 length:(long long)arg2 url:(id)arg3;

@end

