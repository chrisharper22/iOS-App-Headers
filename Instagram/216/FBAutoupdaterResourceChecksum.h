//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBAutoupdaterResourceChecksum : NSObject
{
    NSString *_sha256Checksum;
}

+ (id)checksumWithSha256:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *sha256Checksum; // @synthesize sha256Checksum=_sha256Checksum;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithSha256Checksum:(id)arg1;

@end

