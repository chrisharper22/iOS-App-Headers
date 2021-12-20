//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOutputStream.h>

@class NSError;
@protocol ZZChannelOutput;

@interface ZZDeflateOutputStream : NSOutputStream
{
    id <ZZChannelOutput> _channelOutput;
    unsigned long long _compressionLevel;
    unsigned long long _status;
    NSError *_error;
    unsigned int _crc32;
    struct z_stream_s _stream;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int crc32; // @synthesize crc32=_crc32;
- (_Bool)hasSpaceAvailable;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (void)close;
- (void)open;
- (id)streamError;
- (unsigned long long)streamStatus;
@property(readonly, nonatomic) unsigned int uncompressedSize;
@property(readonly, nonatomic) unsigned int compressedSize;
- (id)initWithChannelOutput:(id)arg1 compressionLevel:(unsigned long long)arg2;

@end
