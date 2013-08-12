// Oleg Andreev <oleganza@gmail.com>

#import <Foundation/Foundation.h>
#import "BTCUnitsAndLimits.h"

@class BTCScript;
@interface BTCTransactionOutput : NSObject

// Serialized binary form of the output (payload)
@property(nonatomic, readonly) NSData* data;

// Value of output in satoshis.
@property(nonatomic) BTCSatoshi value;

// Script defining redemption rules for this output (aka scriptPubKey or pk_script)
@property(nonatomic) BTCScript* script;

// Parses tx input from a data buffer.
- (id) initWithData:(NSData*)data;

// Read tx input from the stream.
- (id) initWithStream:(NSInputStream*)stream;

// Constructs transaction output from a dictionary representation
- (id) initWithDictionary:(NSDictionary*)dictionary;

// Returns a dictionary representation suitable for encoding in JSON or Plist.
- (NSDictionary*) dictionaryRepresentation;

@end
