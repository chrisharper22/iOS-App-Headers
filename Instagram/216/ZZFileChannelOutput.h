//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ZZChannelOutput-Protocol.h"

@interface ZZFileChannelOutput : NSObject <ZZChannelOutput>
{
    int _fileDescriptor;
    unsigned int _offset;
}

@property(nonatomic) unsigned int offset; // @synthesize offset=_offset;
- (void)close;
- (_Bool)truncateAtOffset:(unsigned int)arg1 error:(out id *)arg2;
- (_Bool)writeData:(id)arg1 error:(out id *)arg2;
- (_Bool)seekToOffset:(unsigned int)arg1 error:(out id *)arg2;
- (id)initWithFileDescriptor:(int)arg1;

@end
