//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData;

@protocol ZZChannelOutput
- (void)close;
- (_Bool)truncateAtOffset:(unsigned int)arg1 error:(out id *)arg2;
- (_Bool)writeData:(NSData *)arg1 error:(out id *)arg2;
- (_Bool)seekToOffset:(unsigned int)arg1 error:(out id *)arg2;
- (unsigned int)offset;
@end

