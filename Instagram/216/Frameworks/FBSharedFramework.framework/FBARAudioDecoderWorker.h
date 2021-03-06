//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBARAudioDecoderWorker : NSObject
{
    struct vector<short, std::allocator<short>> _buffer;
    _Bool _finished;
    shared_ptr_0fafba50 _sink;
    shared_ptr_8f4949f5 _audioFileReader;
}

+ (id)newWithSink:(shared_ptr_0fafba50)arg1 audioFileURL:(id)arg2 outputSampleRate:(int)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) shared_ptr_8f4949f5 audioFileReader; // @synthesize audioFileReader=_audioFileReader;
@property(nonatomic) shared_ptr_0fafba50 sink; // @synthesize sink=_sink;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
- (_Bool)advance;
- (id)initWithSink:(shared_ptr_0fafba50)arg1 audioFileURL:(id)arg2 outputSampleRate:(int)arg3;

@end

